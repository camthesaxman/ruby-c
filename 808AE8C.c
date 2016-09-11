int __fastcall sub_808AE8C(int a1, int a2, int a3)
{
  int v3; // r6@1
  unsigned int v4; // r5@1
  int v5; // r2@3
  unsigned __int16 v6; // r0@6
  int v7; // r2@6
  int v9; // [sp+Ch] [bp-4h]@0

  v3 = (v203855E - 33) & 0xFF;
  v4 = 0;
  do
  {
    if ( GetMonData((int)&dword_3004360[25 * v4], 11, a3) )
    {
      sub_806D668(v4);
      if ( !GetMonData((int)&dword_3004360[25 * v4], 45, v5) && sub_8040374((int)&dword_3004360[25 * v4], v3) )
      {
        v6 = ItemIdToBattleMoveId(v203855E);
        if ( pokemon_has_move((int)&dword_3004360[25 * v4], v6, v7) << 24 )
          sub_806BC3C(v4, 0xA8u);
        else
          sub_806BC3C(v4, 0x8Cu);
      }
      else
      {
        sub_806BC3C(v4, 0x9Au);
      }
    }
    v4 = (v4 + 1) & 0xFF;
  }
  while ( v4 <= 5 );
  return v9;
}
