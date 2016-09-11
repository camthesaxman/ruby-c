int sub_8139444()
{
  int v0; // r2@1
  int v1; // r7@1
  int v2; // r8@2
  int v3; // r2@2
  int v4; // r0@2
  int v5; // r0@3
  int v7; // [sp+1Ch] [bp-4h]@0

  load_gfxc_health_bar();
  v0 = (v2024A60 << 9) + 33700451;
  v1 = (signed __int16)(*(_BYTE *)((v2024A60 << 9) + 0x2023A62) | (unsigned __int16)(*(_BYTE *)((v2024A60 << 9)
                                                                                              + 0x2023A63) << 8));
  if ( v1 == 0x7FFF )
  {
    v5 = GetMonData((int)&dword_3004360[25 * *(_WORD *)(2 * v2024A60 + 0x2024A6A)], 58, v0);
    sub_8043D84(v2024A60, byte_3004340[v2024A60], v5, 0, 0x7FFF);
    sub_80440EC(byte_3004340[v2024A60], 0, 0);
  }
  else
  {
    v2 = GetMonData((int)&dword_3004360[25 * *(_WORD *)(2 * v2024A60 + 0x2024A6A)], 58, v0);
    v4 = GetMonData((int)&dword_3004360[25 * *(_WORD *)(2 * v2024A60 + 0x2024A6A)], 57, v3);
    sub_8043D84(v2024A60, byte_3004340[v2024A60], v2, v4, v1);
  }
  dword_3004330[v2024A60] = (int)sub_81377B0;
  return v7;
}
