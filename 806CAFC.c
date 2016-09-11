int __fastcall sub_806CAFC(unsigned __int8 a1, char a2)
{
  char *v2; // r5@1
  char *v3; // r4@1
  __int16 v4; // r2@1
  int v5; // r1@1
  int v7; // [sp+8h] [bp-4h]@0

  v2 = &gSprites[68 * v2001001];
  v3 = &gSprites[68 * v2001002];
  sub_806BF74(a1, a2);
  v4 = *((_WORD *)v2 + 23);
  v5 = *((_WORD *)v2 + 23);
  if ( v5 == *((_WORD *)v3 + 23) )
    sub_806BF24(&gUnknown_083769A8[2 * *((_WORD *)v2 + 23)], v4, 6, 0);
  else
    sub_806BF24(&gUnknown_083769A8[2 * v5], v4, 6, 1u);
  return v7;
}
