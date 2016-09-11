int __fastcall sub_809960C(char a1, unsigned __int8 a2)
{
  int *v2; // r4@2
  int v3; // r2@2
  int v4; // r2@3
  int v5; // r1@4
  int v7; // [sp+Ch] [bp-4h]@0

  if ( a1 == 14 )
  {
    v2 = &gUnknown_083B6DB4;
    v3 = v2001034;
    *(_DWORD *)(4 * a2 + 0x2001038) = v2001034;
    *(_BYTE *)(v3 + 5) = *(_BYTE *)(v3 + 5) & 0xF3 | 4;
    *(_BYTE *)(*(_DWORD *)(4 * a2 + 0x2001038) + 67) = 11;
  }
  else
  {
    v4 = v2001034;
    *(_DWORD *)(4 * a2 + 0x2001050) = v2001034;
    *(_BYTE *)(v4 + 5) = *(_BYTE *)(v4 + 5) & 0xF3 | 8;
    *(_BYTE *)(*(_DWORD *)(4 * a2 + 0x2001050) + 67) = 18 - a2 % 6u;
    v2 = &gUnknown_083B6DB4;
  }
  v5 = *v2 + 4148;
  *(_DWORD *)(*(_DWORD *)v5 + 28) = SpriteCallbackDummy;
  *(_DWORD *)v5 = 0;
  return v7;
}
