int dp01t_0F_1_move_anim()
{
  int v0; // r0@2
  int v2; // [sp+Ch] [bp-4h]@0

  if ( !(mplay_80342A4(v2024A60) << 24) )
  {
    v0 = *(_BYTE *)((v2024A60 << 9) + 0x2023A61) | (*(_BYTE *)((v2024A60 << 9) + 0x2023A62) << 8);
    v202F7C4 = *(_BYTE *)((v2024A60 << 9) + 0x2023A63);
    v202F7BC = *(_BYTE *)((v2024A60 << 9) + 0x2023A64) | (unsigned __int16)(*(_BYTE *)((v2024A60 << 9) + 0x2023A65) << 8);
    v202F7B8 = *(_BYTE *)((v2024A60 << 9) + 0x2023A66) | (*(_BYTE *)((v2024A60 << 9) + 0x2023A67) << 8) | (*(_BYTE *)((v2024A60 << 9) + 0x2023A68) << 16) | (*(_BYTE *)((v2024A60 << 9) + 0x2023A69) << 24);
    v202F7BE = *(_BYTE *)((v2024A60 << 9) + 0x2023A6A);
    v202F7C0 = *(_BYTE *)((v2024A60 << 9) + 0x2023A6C) | (unsigned __int16)(*(_BYTE *)((v2024A60 << 9) + 0x2023A6D) << 8);
    v202F7B4 = (v2024A60 << 9) + 33700464;
    *(_DWORD *)(4 * v2024A60 + 0x2024E70) = *(_DWORD *)((v2024A60 << 9) + 0x2023A70);
    if ( sub_8031720(v0, v202F7C4) & 0xFF )
    {
      dp01_tbl1_exec_completed();
    }
    else
    {
      *(_BYTE *)(12 * v2024A60 + 0x2017814) = 0;
      dword_3004330[v2024A60] = (int)sub_8030190;
    }
  }
  return v2;
}
