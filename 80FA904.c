int __fastcall sub_80FA904(int a1, char a2)
{
  int (*v2)(); // r0@2
  int v4; // [sp+4h] [bp-4h]@0

  v20388CC = a1;
  *(_BYTE *)(a1 + 121) = 0;
  *(_BYTE *)(a1 + 120) = a2;
  if ( a2 )
    v2 = sub_80FAD04;
  else
    v2 = sub_80FAB78;
  *(_DWORD *)(v20388CC + 24) = v2;
  return v4;
}
