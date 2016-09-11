int sub_80304A8()
{
  int v1; // [sp+8h] [bp-4h]@0

  word_30042A4 = 0;
  word_30042A0 = 320;
  sub_802E1B0();
  byte_3004344 = -1;
  sub_802E3B4(*(_BYTE *)(v2024A60 + 0x2024E64));
  if ( *(_BYTE *)((v2024A60 << 9) + 0x2023A62) != 1 )
  {
    InitWindow((int)&unk_3004210, (int)&gUnknown_08400D38, 656, 23, 55);
    sub_8002F44((int)&unk_3004210);
  }
  sub_802E220();
  sub_802E2D4();
  return v1;
}
