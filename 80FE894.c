int __fastcall sub_80FE894(unsigned __int8 a1, char a2, unsigned __int8 a3)
{
  int v3; // r8@1
  char v4; // r5@1
  int v5; // r7@1
  signed int v6; // r10@1
  int v8; // [sp+1Ch] [bp-4h]@0

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = 0;
  if ( v20388F2 + v20388F4 == v20388D5 )
    v6 = 1;
  audio_play(5u);
  if ( v4 )
    v20388F2 = MoveMenuCursor(v4);
  if ( v5 )
  {
    v20388F4 += v5;
    sub_80FEABC(v3, 1);
  }
  if ( v20388F2 + v20388F4 == v20388D5 )
  {
    MenuZeroFillWindowRect(0xFu, 0xCu, 0x1Du, 0x13u);
  }
  else
  {
    if ( v6 )
      MenuDrawTextWindow(0xFu, 0xCu);
    sub_80FECE0((v20388F4 + v20388F2) & 0xFF);
  }
  return v8;
}
