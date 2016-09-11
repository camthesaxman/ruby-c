int sub_803037C()
{
  signed int v0; // r4@1
  int v2; // [sp+Ch] [bp-4h]@0

  word_30042A4 = 0;
  word_30042A0 = 160;
  FillWindowRect((int)&unk_3004210, 10, 2u, 0xFu, 0x1Bu, 0x12u);
  FillWindowRect((int)&unk_3004210, 10, 2u, 0x23u, 0x10u, 0x26u);
  dword_3004330[v2024A60] = (int)sub_802C098;
  InitWindow((int)&unk_3004210, (int)&gUnknown_08400CF3, 400, 18, 35);
  sub_8002F44((int)&unk_3004210);
  sub_814A5C0(0, 0xFFFF, 12, 11679);
  v0 = 0;
  do
  {
    nullsub_8();
    ++v0;
  }
  while ( v0 <= 3 );
  sub_802E3E4(*(_BYTE *)(v2024A60 + 0x2024E60));
  get_battle_strings_("ัÜี่");
  InitWindow((int)&unk_3004210, 33700044, 440, 2, 35);
  sub_8002F44((int)&unk_3004210);
  return v2;
}
