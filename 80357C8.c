int sub_80357C8()
{
  int v1; // [sp+4h] [bp-4h]@0

  if ( !(mplay_80342A4(v2024A60) << 24) )
  {
    sub_8045A5C(
      (unsigned __int8)byte_3004340[v2024A60],
      (char *)&unk_30045C0 + 100 * *(_WORD *)(2 * v2024A60 + 0x2024A6A),
      9);
    *(_BYTE *)(12 * v2024A60 + 0x2017810) &= 0xEFu;
    dword_3004330[v2024A60] = (int)sub_8033494;
  }
  return v1;
}
