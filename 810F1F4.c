signed int __fastcall sub_810F1F4(char a1, int a2)
{
  signed int v2; // r6@1
  int v3; // r4@1
  unsigned int v5; // r5@10

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
      goto _0810F244;
    }
  }
  else if ( a2 == 128 && a1 == 4 )
  {
    v3 = (v203925B - 4) & 0xFF;
    v2 = 1;
  }
  if ( v2 )
  {
_0810F244:
    sub_810F2DC(v3, 5);
    MenuFillWindowRectWithBlankTile(2u, 1u, 9u, 0xAu);
    v5 = 0;
    do
    {
      MenuPrint(gUnknown_083F83C0[v3], 1, 2 * v5 + 1);
      v3 = (v3 + 1) & 0xFF;
      v5 = (v5 + 1) & 0xFF;
    }
    while ( v5 <= 4 );
  }
  return v2;
}
