int sub_8139208()
{
  unsigned __int16 *v0; // r4@1
  int v2; // [sp+Ch] [bp-4h]@0

  word_30042A4 = 0;
  word_30042A0 = 0;
  v0 = (unsigned __int16 *)((v2024A60 << 9) + 33700450);
  if ( *(_WORD *)((v2024A60 << 9) + 0x2023A62) == 2 )
    sub_814A7FC(2);
  sub_8120AA8(*v0);
  sub_8002EB0((int)&unk_3004210, 33700044, 144, 2, 0xFu);
  dword_3004330[v2024A60] = (int)sub_8137454;
  return v2;
}
