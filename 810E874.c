int sub_810E874()
{
  int v0; // r0@2
  unsigned int v1; // r4@4
  int v3; // [sp+14h] [bp-4h]@0

  script_env_2_enable();
  if ( v203925A <= 5u )
  {
    MenuDrawTextWindow(0, 0);
    InitMenu(0, 1, 1, v203925A, 0, 7);
  }
  else
  {
    MenuDrawTextWindow(0, 0);
    InitMenu(0, 1, 1, 5, 0, 7);
    v203925C = 0;
    sub_80F944C();
    v0 = InitMenuInUpperLeftCornerPlaySoundWhenAPressed();
    sub_810ECD4(v0);
  }
  v1 = 0;
  if ( byte_3000760[0] != 16 )
  {
    do
    {
      MenuPrint((int)*(&gUnknown_083F8380 + (unsigned __int8)byte_3000760[4 * v1]), 1, 2 * v1 + 1);
      v1 = (v1 + 1) & 0xFF;
    }
    while ( v1 <= 4 && byte_3000760[4 * v1] != 16 );
  }
  sub_810E944();
  CreateTask((int)sub_810E984, 8);
  return v3;
}
