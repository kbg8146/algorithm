#include <iostream>
#include <climits>
using namespace std;

int main(){

    int n,k;
    cin >> n >> k;

    if(n==k){
        cout << 0;
        return 0;
    } 
    int x[51]={0};
    int y[51]={0};

    for(int i=0;i<n;i++){
        cin >> x[i] >> y[i];
    }
    int distA=0;int distB=0; int distC=0;
    int min_dist=INT_MAX;
    int max_dist=0;
    if(k==1){
        for(int place=0;place<n;place++){//대피소
            max_dist=0;
            for(int i=0;i<n;i++){
                if(place!=i){
                    distA+=abs(x[place]-x[i]);
                    distA+=abs(y[place]-y[i]);
                    // cout << distA << "\n";
                    max_dist = max(distA,max_dist);
                }
                distA=0;
            }
            // cout << "\n";
            min_dist = min(min_dist,max_dist);
        }
        cout << min_dist;
        return 0;
    }
    // 대피소 2개 i,j, k는 각 집
    // 각 집(k)와 대피소 거리 
    // 대피소 고정: 집 차례로 각 min 구하고 그중에 max
    // 대피소 변경 후 다시 반복 해서 max 구하고
    // 모든 max중에 min 구함
    int ans=INT_MAX;
    int minst_dist = INT_MAX;
    //max_dist = INT_MAX;
    bool state=0;
    if(k==2){
        for(int i=0;i<n;i++){//대피소1
            for(int j=0;j<n;j++){//대피소2
                state=0, max_dist=0;
                for(int k=0;k<n;k++){
                    if(i!=j&&i!=k&&j!=k){
                        distA+=abs(x[k]-x[i]);
                        distA+=abs(y[k]-y[i]);
                        distB+=abs(x[k]-x[j]);
                        distB+=abs(y[k]-y[j]);
                        min_dist = min(distA,distB);
                        //cout << "min_dist:" << min_dist << "\n";
                        max_dist = max(min_dist,max_dist);
                        //cout << "max_dist:" << max_dist << "\n";
                        distA=0;distB=0;
                        state=1;
                    }

                }
                if(state==1){
                    minst_dist = min(minst_dist,max_dist);
                    //cout << minst_dist << "\n\n";
                    min_dist=INT_MAX;max_dist=0;                    
                }
            }
        } 
        cout << minst_dist;
    }
    
    if(k==3){
        for(int i=0;i<n;i++){//대피소1
            for(int j=0;j<n;j++){//대피소2
                for(int k=0;k<n;k++){//대피소3
                    state=0;max_dist=0;
                    for(int l=0;l<n;l++){
                        if(i!=j&&j!=k&&k!=l&&i!=k&&i!=l&&j!=l){
                            distA+=abs(x[l]-x[i]);
                            distA+=abs(y[l]-y[i]);
                            distB+=abs(x[l]-x[j]);
                            distB+=abs(y[l]-y[j]);
                            distC+=abs(x[l]-x[k]);
                            distC+=abs(y[l]-y[k]);
                            min_dist = min(distA,distB);
                            min_dist = min(min_dist,distC);
                            //cout << "min_dist:" << min_dist << "\n";
                            max_dist = max(min_dist,max_dist);
                            //cout << "max_dist:" << max_dist << "\n";
                            distA=0;distB=0;distC=0;
                            state=1;
                        }
                    }
                    if(state==1){
                        minst_dist = min(minst_dist,max_dist);
                        //cout << minst_dist << "\n\n";
                        min_dist=INT_MAX;max_dist=0;                    
                    }
                }
                    
            }
        } 
        cout << minst_dist;
    }


    return 0;
}