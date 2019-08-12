import java.io.DataInputStream;
import java.io.FileInputStream;
import java.io.IOException;
import java.util.Arrays;
 
/**
 * Created by rajanW(683281) on 06-Mar-15.
 * UVa 10249 - Greedy easy
 */
class smh {
 
    // to maintain table number after sorting them in decreasing order of capacity
    static class table  implements Comparable<table>{
        int num;
        int cap;
        public table(int n,int c){
            this.num=n; this.cap=c;
        }
        @Override
        public int compareTo(table o) {
            return o.cap-this.cap;          //decreasing order of capacity
        }
    }
 
 
    public static void main(String args[]) throws Exception{
        Reader sc = new Reader();
        while (true){
            int m = sc.nextInt();   int n = sc.nextInt();
            if(m==0&&n==0){break;}
            int[] teams = new int[m];
            table[] tables = new table[n];
            int largestTeam = Integer.MIN_VALUE;
            for(int i=0;i<m;i++){
                teams[i]=sc.nextInt();
                largestTeam = Math.max(largestTeam,teams[i]);
            }
            boolean flag = true;                // flag == is possible
            if(largestTeam>n){flag=false;}
            for(int i=0;i<n;i++){
                tables[i] = new table(i+1,sc.nextInt());
            }
 
            Arrays.sort(tables);            // table numbers are not lost now
            int[][] ans = new int[m][n];    // solution array
            for(int i=0;i<m&&flag;i++){
                for(int j=0;j<teams[i];j++){        // greedily choose the table with most space
                   ans[i][j] = tables[j].num;
                    if(--tables[j].cap<0){flag=false;}
                }
            }
 
            if(!flag){System.out.println(0);}
            else{
                System.out.println(1);
                for(int i=0;i<m;i++){
                    StringBuffer sb = new StringBuffer();
                    for(int j=0;j<teams[i];j++){
                        sb.append(ans[i][j]).append(" ");
                    }
                    System.out.println(sb.toString().trim());
                }
            }
        }
    }
 
 
    //fast Reader
    static class Reader {
        final private int BUFFER_SIZE = 1 << 16;
        private DataInputStream din;
        private byte[] buffer;
        private int bufferPointer, bytesRead;
 
        public Reader() {
            din = new DataInputStream(System.in);
            buffer = new byte[BUFFER_SIZE];
            bufferPointer = bytesRead = 0;
        }
 
        public Reader(String file_name) throws IOException {
            din = new DataInputStream(new FileInputStream(file_name));
            buffer = new byte[BUFFER_SIZE];
            bufferPointer = bytesRead = 0;
        }
 
        public String readLine() throws IOException {
            byte[] buf = new byte[64];
            int cnt = 0, c;
            while ((c = read()) != -1) {
                if (c == '\n')
                    break;
                buf[cnt++] = (byte) c;
            }
            return new String(buf, 0, cnt);
        }/*public boolean isSpace(int c) { return c == ' ' || c == '\n' || c == '\r' || c == '\t' || c == -1;
			}public String next() throws IOException{byte[] buf=new byte[64];int cnt=0,c;while((c=read())!=-1){if(isSpace(c))break;buf[cnt++]=(byte)c;}return new String(buf,0,cnt);
			}*/
 
        public int nextInt() throws IOException {
            int ret = 0;
            byte c = read();
            while (c <= ' ')
                c = read();
            boolean neg = (c == '-');
            if (neg)
                c = read();
            do {
                ret = ret * 10 + c - '0';
            } while ((c = read()) >= '0' && c <= '9');
            if (neg)
                return -ret;
            return ret;
        }
 
        public long nextLong() throws IOException {
            long ret = 0;
            byte c = read();
            while (c <= ' ')
                c = read();
            boolean neg = (c == '-');
            if (neg)
                c = read();
            do {
                ret = ret * 10L + c - '0';
            } while ((c = read()) >= '0' && c <= '9');
            if (neg)
                return -ret;
            return ret;
        }
 
        public double nextDouble() throws IOException {
            double ret = 0, div = 1;
            byte c = read();
            while (c <= ' ')
                c = read();
            boolean neg = (c == '-');
            if (neg)
                c = read();
            do {
                ret = ret * 10 + c - '0';
            } while ((c = read()) >= '0' && c <= '9');
            if (c == '.')
                while ((c = read()) >= '0' && c <= '9')
                    ret += (c - '0') / (div *= 10);
            if (neg)
                return -ret;
            return ret;
        }
 
        private void fillBuffer() throws IOException {
            bytesRead = din.read(buffer, bufferPointer = 0, BUFFER_SIZE);
            if (bytesRead == -1)
                buffer[0] = -1;
        }
 
        private byte read() throws IOException {
            if (bufferPointer == bytesRead)
                fillBuffer();
            return buffer[bufferPointer++];
        }
 
        public String next() throws IOException {
            StringBuilder sb = new StringBuilder();
            byte c;
            while ((c = read()) <= ' ')
                ;
            do {
                sb.append((char) c);
            } while ((c = read()) > ' ');
            return sb.toString();
        }
 
        public int nextInt2() throws IOException {
            int ret = 0;
            byte c = read();
            while (c <= ' ')
                c = read();
            boolean neg = (c == '-');
            if (neg)
                c = read();
            do {
                ret = ret * 10 + c - '0';
            } while ((c = read()) >= '0' && c <= '9');
            if (neg)
                return -ret;
            return ret;
        }
 
        public void close() throws IOException {
            if (din == null)
                return;
            din.close();
        }
    }
}