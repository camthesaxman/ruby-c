int __fastcall sub_8078914(int a1)
{
  int v1; // r4@1
  char v2; // r0@2
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( sub_8076BE0() << 24 )
  {
    *(_DWORD *)v1 = 100696064;
    *(_DWORD *)(v1 + 4) = 100724736;
    v2 = 14;
  }
  else
  {
    *(_DWORD *)v1 = 100679680;
    *(_DWORD *)(v1 + 4) = 100720640;
    v2 = 8;
  }
  *(_BYTE *)(v1 + 8) = v2;
  return v4;
}
