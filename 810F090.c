int sub_810F090()
{
  unsigned int v0; // r4@1
  int v1; // r0@1
  int v3; // [sp+10h] [bp-4h]@0

  script_env_2_enable();
  MenuDrawTextWindow(0, 0);
  v0 = 0;
  InitMenu(0, 1, 1, 5, 0, 9);
  v203925C = 0;
  sub_80F944C();
  v1 = InitMenuInUpperLeftCornerPlaySoundWhenAPressed();
  sub_810F2B4(v1);
  do
  {
    MenuPrint(gUnknown_083F83C0[v0], 1, 2 * v0 + 1);
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 4 );
  v203925B = 0;
  v203925A = 8;
  CreateTask((int)sub_810F118, 8);
  return v3;
}
