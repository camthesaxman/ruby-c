int sub_8039D80()
{
  int v0; // r8@2
  int v1; // r0@2
  int v2; // r0@3
  int v4; // [sp+1Ch] [bp-4h]@0

  load_gfxc_health_bar();
  if ( (signed __int16)(*(_BYTE *)((v2024A60 << 9) + 0x2023A62) | (unsigned __int16)(*(_BYTE *)((v2024A60 << 9)
                                                                                              + 0x2023A63) << 8)) == 0x7FFF )
  {
    v2 = GetMonData((char *)&unk_30045C0 + 100 * *(_WORD *)(2 * v2024A60 + 0x2024A6A), 58);
    sub_8043D84(v2024A60, (unsigned __int8)byte_3004340[v2024A60], v2, 0);
  }
  else
  {
    v0 = GetMonData((char *)&unk_30045C0 + 100 * *(_WORD *)(2 * v2024A60 + 0x2024A6A), 58);
    v1 = GetMonData((char *)&unk_30045C0 + 100 * *(_WORD *)(2 * v2024A60 + 0x2024A6A), 57);
    sub_8043D84(v2024A60, (unsigned __int8)byte_3004340[v2024A60], v0, v1);
  }
  dword_3004330[v2024A60] = (int)sub_8037B24;
  return v4;
}
