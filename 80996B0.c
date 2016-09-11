int __fastcall sub_80996B0(char a1, unsigned __int8 a2)
{
  int *v2; // r3@2
  int v3; // r0@2
  signed int v4; // r4@2
  int v5; // r1@4
  int v7; // [sp+4h] [bp-4h]@0

  if ( a1 == 14 )
  {
    v2 = &gUnknown_083B6DB4;
    v3 = 4 * a2;
    v4 = 4152;
  }
  else
  {
    v2 = &gUnknown_083B6DB4;
    v3 = 4 * a2;
    v4 = 4176;
  }
  v20010C8 = v3 + v4 + 0x2000000;
  v5 = *v2;
  *(_DWORD *)(*(_DWORD *)(*v2 + 4148) + 28) = SpriteCallbackDummy;
  *(_BYTE *)(v5 + 4464) = 0;
  return v7;
}
