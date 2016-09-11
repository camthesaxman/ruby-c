signed int __fastcall sub_810EAC8(char a1, int a2)
{
  signed int v2; // r7@1
  int v3; // r4@1
  unsigned int v5; // r5@10
  int i; // r1@10

  a2 = (unsigned __int8)a2;
  v2 = 0;
  v3 = 0;
  if ( v203925A <= 4u )
    return 0;
  if ( a2 == 64 )
  {
    if ( !a1 )
    {
      v3 = v203925B;
      v2 = 1;
      goto _0810EB1C;
    }
  }
  else if ( a2 == 128 && a1 == 4 )
  {
    v3 = (v203925B - 4) & 0xFF;
    v2 = 1;
  }
  if ( v2 )
  {
_0810EB1C:
    sub_810EB90(v3, 5);
    MenuFillWindowRectWithBlankTile(2u, 1u, 7u, 0xAu);
    v5 = 0;
    for ( i = 4 * v3; byte_3000760[4 * v3] != 16; i = 4 * v3 )
    {
      MenuPrint((int)*(&gUnknown_083F8380 + (unsigned __int8)byte_3000760[i]), 1, 2 * v5 + 1);
      v3 = (v3 + 1) & 0xFF;
      v5 = (v5 + 1) & 0xFF;
      if ( v5 > 4 )
        break;
    }
  }
  return v2;
}
