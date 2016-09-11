int __fastcall sub_80C4A44(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  unsigned int v2; // r3@1
  unsigned int v3; // r3@3
  unsigned int v4; // r3@6
  unsigned __int8 v6; // [sp+0h] [bp-20h]@2
  char v7; // [sp+4h] [bp-1Ch]@7
  int v8; // [sp+1Ch] [bp-4h]@8

  v1 = a1;
  v2 = 0;
  do
  {
    *(&v6 + v2) = *((_WORD *)&byte_3004B28[40 * a1] + v2 + 1);
    v2 = (v2 + 1) & 0xFF;
  }
  while ( v2 <= 3 );
  v3 = 0;
  do
    v3 = (v3 + 1) & 0xFF;
  while ( v3 <= 3 && v6 == *(&v6 + v3) );
  v202E8CC = v3 != 4;
  v4 = 0;
  do
  {
    *(&v7 + v4) = *((_WORD *)&byte_3004B28[40 * a1] + v4 + 5);
    v4 = (v4 + 1) & 0xFF;
  }
  while ( v4 <= 3 );
  v203869B = sub_80C4B34(&v7);
  sub_80AE82C(v203869C);
  SetTaskFuncWithFollowupFunc(v1, (int)sub_80C8EBC, (int)sub_80C4B0C);
  return v8;
}
