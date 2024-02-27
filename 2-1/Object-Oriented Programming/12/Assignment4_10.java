abstract class PairMap {
    protected String KeyArray[]; // key 들을 저장하는 배열
    protected String valueArray[]; // value 들을 저장하는 배열
    abstract String get(String key); // key 값을 가진 value 리턴, 없으면 null 리턴
    abstract void put(String key, String value); // key와 value를 쌍으로 저장. 기존에 key가 있으면, 값을 value로 수정
    abstract String delete(String key); // key 값을 가진 아이템 (value와 함꼐) 삭제, 삭제된 value 값 리턴
    abstract int length(); // 현재 저장된 아이템의 개수 리턴
}

class Dictionary2 extends PairMap {
    private int index;
    public Dictionary2(int numb){
        KeyArray = new String[numb];
        valueArray = new String[numb];
        index = 0;
    }
    @Override
    public void put(String key, String value){
        for(int i = 0; i<KeyArray.length; i++){
            if(key.equals(KeyArray[i])){
                KeyArray[i] = key;
                valueArray[i] = value;
                return;
            }
        }
        KeyArray[index] = key;
        valueArray[index] = value;
        index++;
    }
    @Override
    public String get(String key){
        for(int i = 0; i < KeyArray.length; i++){
            if(key.equals(KeyArray[i])){
                return valueArray[i];
            }
        }
        return null;
    }
    @Override
    public String delete(String key){
        for(int i = 0; i<KeyArray.length; i++){
            if(key.equals(KeyArray[i])){
                String temp = valueArray[i];
                KeyArray[i] = null;
                valueArray[i] = null;
                return temp;
            }
        }
        return null;
    }
    @Override
    public int length(){
        return index;
    }
}

public class Assignment4_10 {
    public static void main(String[] args) {
        Dictionary2 dic = new Dictionary2(10);
        dic.put("황기태", "자바");
        dic.put("이재문", "파이선");
        dic.put("이재문", "C++"); // 이재문의 값을 C++로 수정
        System.out.println("이재문의 값은 " + dic.get("이재문"));
        System.out.println("황기태의 값은 " + dic.get("황기태"));
        dic.delete("황기태"); // 황기태 아이템 삭제
        System.out.println("황기태의 값은 " + dic.get("황기태")); //삭제된 아이템 접근
    }
}
