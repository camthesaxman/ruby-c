int sub_804F81C()
{
  __int16 *v0; // r1@1
  signed int v1; // r2@1
  int v3; // [sp+0h] [bp-4h]@0

  v0 = gRecvCmds;
  v1 = 3;
  do
  {
    gSendCmd[0] = 0;
    word_3002F94 = 0;
    *v0 = 0;
    v0[8] = 0;
    ++v0;
    --v1;
  }
  while ( v1 >= 0 );
  return v3;
}
