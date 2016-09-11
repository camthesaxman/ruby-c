int sub_806CCE4()
{
  unsigned int v0; // r4@1
  unsigned int v1; // r5@1
  int v3; // [sp+8h] [bp-4h]@0

  v0 = *(_WORD *)&gSprites[68 * v2001001 + 46] & 0xFF;
  v1 = *(_WORD *)&gSprites[68 * v2001002 + 46] & 0xFF;
  if ( v0 <= 5 )
    sub_806BF24(&gUnknown_083769A8[2 * v0], gSprites[68 * v2001001 + 46], 3, 0);
  if ( v1 <= 5 )
    sub_806BF24(&gUnknown_083769A8[2 * v1], v1, 3, 1u);
  return v3;
}
