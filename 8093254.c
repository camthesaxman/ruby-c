int sub_8093254()
{
  int v1; // [sp+0h] [bp-4h]@0

  LoadOam();
  ProcessSpriteCopyRequests();
  TransferPlttBuffer();
  ++v2000006;
  if ( v2000006 > 0x3Bu )
  {
    v2000006 = 0;
    v2000005 ^= 1u;
  }
  if ( v2000004 )
  {
    v40000D4 = word_3004DE0;
    v40000D8 = &word_3005560;
    v40000DC = -2147483488;
  }
  return v1;
}
