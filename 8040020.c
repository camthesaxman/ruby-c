int __fastcall sub_8040020(int a1)
{
  int v1; // r6@1
  int v2; // r5@1
  signed int v3; // r4@1

  v1 = a1;
  v2 = 0;
  v3 = 0;
  do
    v2 = (v2 + GetMonData(v1, v3++ + 26, 0)) & 0xFFFF;
  while ( v3 <= 5 );
  return v2;
}
