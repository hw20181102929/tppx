bool IsTopSeq( LGraph Graph, Vertex Seq[] )
{
    int indegree[1000];
    int p[1000];
    int rear=0,front=0;
    for(int i=0;i<Graph->Nv;i++)
    {
        indegree[i]=0;
    }
    struct AdjVNode * w;
    for(int i=0;i<Graph->Nv;i++)
    {
        for (w=Graph->G[i].FirstEdge;w;w=w->Next)
        {
            indegree[w->AdjV]++;
        }
    }
    for(int i=0;i<Graph->Nv;i++)
    {
        if(indegree[i]==0)
        {
            p[rear++]=i;
        }
    }
    int c = 0;
    while(rear!=front)
    {
        while(Seq[c]!=p[front])
        {
            
        }
    }
}
