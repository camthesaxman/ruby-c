int __fastcall sav2_get_text_speed(int a1, unsigned __int16 a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int v5; // [sp+10h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  MenuDisplayMessageBox();
  if ( v3 )
    sub_80A3FA0((int)gBG1TilemapBuffer, 2u, 15, 26, 4u, v3);
  sub_8072044(v2);
  return v5;
}
