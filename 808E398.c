int __fastcall sub_808E398(char a1, unsigned __int16 a2)
{
  int v2; // r1@4
  int v3; // r0@5
  signed __int16 *v4; // r1@6
  signed __int16 v5; // r0@7
  int v6; // r1@9
  int v7; // r0@10
  int v9; // [sp+Ch] [bp-4h]@0

  *(_WORD *)(v202FFB4 + 1586) = *(_WORD *)(v202FFB4 + 1584);
  if ( a1 == 1 )
  {
    v2 = (unsigned __int16)sub_808E888((a2 - 1) & 0xFFFF);
    if ( v2 != 0xFFFF )
    {
      v3 = 17 * (unsigned __int8)sub_808E8C8(v2, 96, 80);
      dword_2020020[v3] = (int)sub_808EE28;
      *(_WORD *)&gSprites[v3 * 4 + 56] = -64;
    }
    v4 = (signed __int16 *)(v202FFB4 + 1584);
    if ( (signed int)*(_WORD *)(v202FFB4 + 1584) <= 0 )
      v5 = 15;
    else
      v5 = *(_WORD *)(v202FFB4 + 1584) - 1;
  }
  else
  {
    if ( a1 != 2 )
      return v9;
    v6 = (unsigned __int16)sub_808E888((a2 + 1) & 0xFFFF);
    if ( v6 != 0xFFFF )
    {
      v7 = 17 * (unsigned __int8)sub_808E8C8(v6, 96, 80);
      dword_2020020[v7] = (int)sub_808EE28;
      *(_WORD *)&gSprites[v7 * 4 + 56] = 64;
    }
    v4 = (signed __int16 *)(v202FFB4 + 1584);
    if ( (signed int)*(_WORD *)(v202FFB4 + 1584) > 14 )
      v5 = 0;
    else
      v5 = *(_WORD *)(v202FFB4 + 1584) + 1;
  }
  *v4 = v5;
  return v9;
}
