int sub_802E1B0()
{
  _WORD *v0; // r4@1
  signed int v1; // r6@1
  int v3; // [sp+14h] [bp-4h]@0

  v0 = (_WORD *)((v2024A60 << 9) + 33700452);
  byte_3004348 = 0;
  FillWindowRect((int)&unk_3004210, 4118, 1u, 0x37u, 0x14u, 0x3Au);
  v1 = 0;
  do
  {
    nullsub_7((unsigned __int8)v1);
    sub_802E12C(v1, &gUnknown_08400D49);
    if ( *v0 )
      ++byte_3004348;
    ++v0;
    ++v1;
  }
  while ( v1 <= 3 );
  return v3;
}
