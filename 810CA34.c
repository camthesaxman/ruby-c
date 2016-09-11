signed int __fastcall sub_810CA34(int a1)
{
  int v1; // r4@1
  int v2; // r2@1
  int v3; // r2@2
  int v4; // r1@2
  signed int result; // r0@2

  v1 = a1;
  v2 = (char)sub_810CA00();
  if ( v2 == -1 )
  {
    result = 0;
  }
  else
  {
    v3 = 8 * v2 + 33709868;
    v4 = *(_DWORD *)(v1 + 4);
    *(_DWORD *)v3 = *(_DWORD *)v1;
    *(_DWORD *)(v3 + 4) = v4;
    result = 1;
  }
  return result;
}
