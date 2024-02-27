-- MySQL dump 10.13  Distrib 8.1.0, for macos14.0 (arm64)
--
-- Host: localhost    Database: DB20212228
-- ------------------------------------------------------
-- Server version	8.2.0

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!50503 SET NAMES utf8mb4 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `Account`
--

DROP TABLE IF EXISTS `Account`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `Account` (
  `account_number` varchar(20) NOT NULL,
  `balance` int NOT NULL,
  PRIMARY KEY (`account_number`),
  CONSTRAINT `account_chk_1` CHECK ((`balance` <= 1000))
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `Account`
--

LOCK TABLES `Account` WRITE;
/*!40000 ALTER TABLE `Account` DISABLE KEYS */;
INSERT INTO `Account` VALUES ('A01',1000),('A02',900),('A03',800),('A04',700),('A05',600),('A06',500),('A07',400);
/*!40000 ALTER TABLE `Account` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `Borrower`
--

DROP TABLE IF EXISTS `Borrower`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `Borrower` (
  `customer_id` varchar(3) NOT NULL,
  `loan_number` varchar(20) NOT NULL,
  PRIMARY KEY (`customer_id`,`loan_number`),
  KEY `loan_number` (`loan_number`),
  CONSTRAINT `borrower_ibfk_1` FOREIGN KEY (`customer_id`) REFERENCES `Customer` (`customer_id`),
  CONSTRAINT `borrower_ibfk_2` FOREIGN KEY (`loan_number`) REFERENCES `Loan` (`loan_number`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `Borrower`
--

LOCK TABLES `Borrower` WRITE;
/*!40000 ALTER TABLE `Borrower` DISABLE KEYS */;
INSERT INTO `Borrower` VALUES ('C01','L01'),('C01','L02'),('C02','L03'),('C02','L04'),('C02','L05'),('C03','L06'),('C03','L07'),('C04','L08'),('C05','L08');
/*!40000 ALTER TABLE `Borrower` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `Branch`
--

DROP TABLE IF EXISTS `Branch`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `Branch` (
  `branch_name` varchar(100) NOT NULL,
  `branch_city` varchar(100) NOT NULL,
  `assets` int NOT NULL,
  PRIMARY KEY (`branch_name`),
  CONSTRAINT `branch_chk_1` CHECK ((`assets` <= 5000))
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `Branch`
--

LOCK TABLES `Branch` WRITE;
/*!40000 ALTER TABLE `Branch` DISABLE KEYS */;
INSERT INTO `Branch` VALUES ('명동지점','서울시',4500),('부산역지점','부산시',1000),('송도지점','인천시',2000),('숭실대지점','서울시',4000),('엑스포지점','대전시',500),('울산대지점','울산시',3000),('충남대지점','대전시',1500);
/*!40000 ALTER TABLE `Branch` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `Customer`
--

DROP TABLE IF EXISTS `Customer`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `Customer` (
  `customer_id` varchar(3) NOT NULL,
  `customer_name` varchar(100) NOT NULL,
  `customer_street` varchar(100) NOT NULL,
  `customer_city` varchar(100) NOT NULL,
  PRIMARY KEY (`customer_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `Customer`
--

LOCK TABLES `Customer` WRITE;
/*!40000 ALTER TABLE `Customer` DISABLE KEYS */;
INSERT INTO `Customer` VALUES ('C01','이길동','덕진구 금암동 111','전주시'),('C02','이철수','서구 만년동 222','대전시'),('C03','이영희','해운대구 우동 333','부산시'),('C04','고윤정','마포구 연남동 444','서울시'),('C05','예슈화','강남구 역삼동 555','서울시'),('C06','송우기','강서구 가양동 666','서울시'),('C07','조미연','완산구 전동 777','전주시'),('C08','전소연','완산구 효자동 888','전주시');
/*!40000 ALTER TABLE `Customer` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `customer_banker`
--

DROP TABLE IF EXISTS `customer_banker`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `customer_banker` (
  `customer_id` varchar(3) NOT NULL,
  `employee_id` varchar(3) NOT NULL,
  PRIMARY KEY (`customer_id`),
  KEY `employee_id` (`employee_id`),
  CONSTRAINT `customer_banker_ibfk_1` FOREIGN KEY (`customer_id`) REFERENCES `Customer` (`customer_id`),
  CONSTRAINT `customer_banker_ibfk_2` FOREIGN KEY (`employee_id`) REFERENCES `Employee` (`employee_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `customer_banker`
--

LOCK TABLES `customer_banker` WRITE;
/*!40000 ALTER TABLE `customer_banker` DISABLE KEYS */;
INSERT INTO `customer_banker` VALUES ('C01','W01'),('C02','W01'),('C03','W02'),('C04','W02'),('C05','W03'),('C06','W04'),('C08','W05');
/*!40000 ALTER TABLE `customer_banker` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `Depositor`
--

DROP TABLE IF EXISTS `Depositor`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `Depositor` (
  `customer_id` varchar(3) NOT NULL,
  `account_number` varchar(20) NOT NULL,
  PRIMARY KEY (`customer_id`,`account_number`),
  KEY `account_number` (`account_number`),
  CONSTRAINT `depositor_ibfk_1` FOREIGN KEY (`customer_id`) REFERENCES `Customer` (`customer_id`),
  CONSTRAINT `depositor_ibfk_2` FOREIGN KEY (`account_number`) REFERENCES `Account` (`account_number`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `Depositor`
--

LOCK TABLES `Depositor` WRITE;
/*!40000 ALTER TABLE `Depositor` DISABLE KEYS */;
INSERT INTO `Depositor` VALUES ('C04','A01'),('C04','A02'),('C05','A03'),('C05','A04'),('C06','A05'),('C06','A06'),('C07','A07');
/*!40000 ALTER TABLE `Depositor` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `Employee`
--

DROP TABLE IF EXISTS `Employee`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `Employee` (
  `employee_id` varchar(3) NOT NULL,
  `employee_name` varchar(100) NOT NULL,
  `telephone_number` varchar(11) NOT NULL,
  `employee_length` int NOT NULL,
  `start_date` date NOT NULL,
  PRIMARY KEY (`employee_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `Employee`
--

LOCK TABLES `Employee` WRITE;
/*!40000 ALTER TABLE `Employee` DISABLE KEYS */;
INSERT INTO `Employee` VALUES ('M01','박보영','200-1111',21,'2002-05-12'),('M02','김세정','500-2222',18,'2005-07-31'),('M03','송혜교','5200-3333',25,'1999-01-01'),('W01','정은지','5200-4444',13,'2010-10-08'),('W02','전지현','200-5555',11,'2012-03-28'),('W03','신세경','500-6666',10,'2013-12-25'),('W04','박은빈','200-7777',7,'2016-08-17'),('W05','한효주','5200-8888',5,'2018-04-04'),('W06','고아라','200-9999',3,'2020-11-14'),('W07','문채원','200-1010',1,'2022-09-11'),('W08','한소희','8500-1111',0,'2023-02-19');
/*!40000 ALTER TABLE `Employee` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `Employee_Dependent`
--

DROP TABLE IF EXISTS `Employee_Dependent`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `Employee_Dependent` (
  `employee_id` varchar(3) NOT NULL,
  `dependent_name` varchar(100) NOT NULL,
  PRIMARY KEY (`employee_id`,`dependent_name`),
  CONSTRAINT `employee_dependent_ibfk_1` FOREIGN KEY (`employee_id`) REFERENCES `Employee` (`employee_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `Employee_Dependent`
--

LOCK TABLES `Employee_Dependent` WRITE;
/*!40000 ALTER TABLE `Employee_Dependent` DISABLE KEYS */;
INSERT INTO `Employee_Dependent` VALUES ('M01','박승후'),('M01','황서현'),('M03','김건우'),('M03','김승현'),('W08','이강'),('W08','이산'),('W08','이솔'),('W08','이숲');
/*!40000 ALTER TABLE `Employee_Dependent` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `Loan`
--

DROP TABLE IF EXISTS `Loan`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `Loan` (
  `loan_number` varchar(20) NOT NULL,
  `amount` int NOT NULL,
  PRIMARY KEY (`loan_number`),
  CONSTRAINT `loan_chk_1` CHECK ((`amount` <= 1000))
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `Loan`
--

LOCK TABLES `Loan` WRITE;
/*!40000 ALTER TABLE `Loan` DISABLE KEYS */;
INSERT INTO `Loan` VALUES ('L01',300),('L02',400),('L03',500),('L04',600),('L05',700),('L06',800),('L07',900),('L08',1000);
/*!40000 ALTER TABLE `Loan` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `loan_branch`
--

DROP TABLE IF EXISTS `loan_branch`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `loan_branch` (
  `loan_number` varchar(20) NOT NULL,
  `branch_name` varchar(100) NOT NULL,
  PRIMARY KEY (`loan_number`),
  KEY `branch_name` (`branch_name`),
  CONSTRAINT `loan_branch_ibfk_1` FOREIGN KEY (`loan_number`) REFERENCES `Loan` (`loan_number`),
  CONSTRAINT `loan_branch_ibfk_2` FOREIGN KEY (`branch_name`) REFERENCES `Branch` (`branch_name`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `loan_branch`
--

LOCK TABLES `loan_branch` WRITE;
/*!40000 ALTER TABLE `loan_branch` DISABLE KEYS */;
INSERT INTO `loan_branch` VALUES ('L01','명동지점'),('L07','부산역지점'),('L08','송도지점'),('L02','숭실대지점'),('L06','엑스포지점'),('L03','충남대지점'),('L04','충남대지점'),('L05','충남대지점');
/*!40000 ALTER TABLE `loan_branch` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `manager_worker`
--

DROP TABLE IF EXISTS `manager_worker`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `manager_worker` (
  `employee_manager` varchar(3) NOT NULL,
  `employee_worker` varchar(3) NOT NULL,
  PRIMARY KEY (`employee_worker`),
  KEY `employee_manager` (`employee_manager`),
  CONSTRAINT `manager_worker_ibfk_1` FOREIGN KEY (`employee_manager`) REFERENCES `Employee` (`employee_id`),
  CONSTRAINT `manager_worker_ibfk_2` FOREIGN KEY (`employee_worker`) REFERENCES `Employee` (`employee_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `manager_worker`
--

LOCK TABLES `manager_worker` WRITE;
/*!40000 ALTER TABLE `manager_worker` DISABLE KEYS */;
INSERT INTO `manager_worker` VALUES ('M01','W02'),('M01','W04'),('M01','W06'),('M01','W07'),('M02','W03'),('M03','W01'),('M03','W05');
/*!40000 ALTER TABLE `manager_worker` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `payment`
--

DROP TABLE IF EXISTS `payment`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `payment` (
  `loan_number` varchar(20) NOT NULL,
  `payment_number` int NOT NULL,
  `payment_amount` int NOT NULL,
  `payment_date` date NOT NULL,
  PRIMARY KEY (`payment_number`),
  KEY `loan_number` (`loan_number`),
  CONSTRAINT `payment_ibfk_1` FOREIGN KEY (`loan_number`) REFERENCES `Loan` (`loan_number`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `payment`
--

LOCK TABLES `payment` WRITE;
/*!40000 ALTER TABLE `payment` DISABLE KEYS */;
INSERT INTO `payment` VALUES ('L03',1,250,'2021-12-25'),('L04',2,600,'2022-02-19'),('L05',3,350,'2022-11-11'),('L06',4,800,'2022-12-25'),('L07',5,400,'2023-02-19'),('L07',6,300,'2023-05-07'),('L07',7,300,'2023-11-04'),('L08',8,1000,'2023-11-04');
/*!40000 ALTER TABLE `payment` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2023-11-15 19:38:38
