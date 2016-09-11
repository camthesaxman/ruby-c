signed int __fastcall unref_sub_81261B4(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r7@1
  int v4; // r4@4
  int v5; // r0@4
  int v6; // r0@4
  signed int result; // r0@4

  v2 = a1;
  v3 = a2;
  if ( *(_BYTE *)a1 != 1 || *(_BYTE *)(a1 + 17) != 15 || sub_812618C(a1 + 18) )
  {
    result = 0;
  }
  else
  {
    v4 = sub_812618C(v2 + 22) - v3 + v2;
    v5 = sub_812618C(v2 + 26);
    v6 = sub_812616C(v4, v5 - v3 + v2 - v4);
    sub_81261A4(v2 + 18, v6);
    result = 1;
  }
  return result;
}
