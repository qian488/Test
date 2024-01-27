#include<iostream>

using namespace std;
//堆优化版的Dijkstra算法
//手写堆 
/*
1.插入一个数
heap[++size]=x;up(size);
2.求集合中最小值
heap[1]
3.删除最小值
heap[1]=heap[size];size--;down(1);
4.删除任意元素
heap[k]=heap[size];size--;down(k);up(k);
5.修改任意元素
heap[k]=x;down(k);up(k);
*/
//终于蹲到一题用堆数据结构的题了
//集美大学"第15届蓝桥杯大赛(软件类)"校内选拔赛--堆
int main()
{
    
    return 0;
}
/*
堆 —— 模板题 AcWing 838. 堆排序, AcWing 839. 模拟堆
// h[N]存储堆中的值, h[1]是堆顶，x的左儿子是2x, 右儿子是2x + 1
// ph[k]存储第k个插入的点在堆中的位置
// hp[k]存储堆中下标是k的点是第几个插入的
int h[N], ph[N], hp[N], size;

// 交换两个点，及其映射关系
void heap_swap(int a, int b)
{
    swap(ph[hp[a]],ph[hp[b]]);
    swap(hp[a], hp[b]);
    swap(h[a], h[b]);
}

void down(int u)
{
    int t = u;
    if (u * 2 <= size && h[u * 2] < h[t]) t = u * 2;
    if (u * 2 + 1 <= size && h[u * 2 + 1] < h[t]) t = u * 2 + 1;
    if (u != t)
    {
        heap_swap(u, t);
        down(t);
    }
}

void up(int u)
{
    while (u / 2 && h[u] < h[u / 2])
    {
        heap_swap(u, u / 2);
        u >>= 1;
    }
}

// O(n)建堆
for (int i = n / 2; i; i -- ) down(i);
*/