#include &lt;iostream&gt;
#include &lt;cctype&gt;
#include &lt;string&gt;
using namespace std;
int main()
{
char str[100];
cout &lt;&lt; &quot;Enter a string: &quot;;
gets(str);
int count=0;
for(int i = 1; i &lt; 100; i++)
{
if(str[i] &gt;= &#39;A&#39; &amp;&amp; str[i] &lt;= &#39;Z&#39;)

{
count++;
}
}
cout &lt;&lt; &quot;total uppercase letters in a string are: &quot;&lt;&lt;count-1&lt;&lt;endl;
for(char &amp;c : str)
{
c= toupper(c);
}
cout&lt;&lt;&quot;uppercase string: &quot;&lt;&lt;str&lt;&lt;endl;
for(char &amp;c : str)
{
c=tolower(c);
}
cout&lt;&lt;&quot;lowercase string: &quot;&lt;&lt;str&lt;&lt;endl;
return 0;
}
