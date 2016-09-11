unsigned int __fastcall sub_80D5940(unsigned __int8 a1)
{
  int v1; // r4@1
  int v2; // r0@2
  signed int v3; // r1@2

  v1 = (gSprites[68 * a1 + 41] + *(_WORD *)&gSprites[68 * a1 + 38] + *(_WORD *)&gSprites[68 * a1 + 34]) & 0xFFFF;
  if ( battle_side_get_owner(v202F7C8) << 24 )
  {
    v2 = v1 << 16;
    v3 = 2883584;
  }
  else
  {
    v2 = v1 << 16;
    v3 = 4849664;
  }
  return (unsigned int)(v2 + v3) >> 16;
}
