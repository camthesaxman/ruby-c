int sub_806B908()
{
  int v0; // r2@1
  int v1; // r2@2
  int v3; // [sp+8h] [bp-4h]@0

  memset(gBG2TilemapBuffer, 0, 2048);
  v202E8FA = 3;
  sub_806B9A4(0, 1, 3);
  if ( GetMonData((int)&unk_30043C4, 11, v0) )
    sub_806BA94(11, 2, 0, 3);
  else
    sub_806BA94(11, 2, 1, 3);
  if ( GetMonData((int)&unk_3004428, 11, v1) )
    sub_806BA94(11, 5, 0, 3);
  else
    sub_806BA94(11, 5, 1, 3);
  v201B261 = 2;
  return v3;
}
