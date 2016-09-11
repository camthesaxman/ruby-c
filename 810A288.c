int __fastcall sub_810A288(unsigned __int8 a1)
{
  int *v1; // r2@1
  char *v2; // r1@1
  int v4; // [sp+0h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  v2 = &gSprites[68 * *((_WORD *)v1 + 6)];
  if ( v2[63] & 0x20 && *((_WORD *)v2 + 16) == 120 && *((_WORD *)v2 + 17) == 64 )
    *v1 = (int)sub_810A2D8;
  return v4;
}
