int __fastcall sub_8117D68(unsigned __int8 a1)
{
  char *v1; // r2@3
  int v3; // [sp+8h] [bp-4h]@0

  if ( a1 )
  {
    gSprites[68 * v201906C + 62] &= 0xFBu;
    v1 = (char *)&gUnknown_083F8C00 + 20 * a1;
    *(_WORD *)&gSprites[68 * v201906C + 32] = 8 * ((unsigned __int8)v1[3] + 2);
    *(_WORD *)&gSprites[68 * v201906C + 34] = 8 * ((unsigned __int8)v1[4] + 2);
  }
  else
  {
    gSprites[68 * v201906C + 62] |= 4u;
  }
  return v3;
}
