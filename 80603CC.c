int __fastcall sub_80603CC(__int16 a1, __int16 a2, _WORD *a3, _WORD *a4)
{
  _WORD *v4; // r12@1
  unsigned int v5; // r3@1
  unsigned int v6; // r4@1
  int v8; // [sp+10h] [bp-4h]@0

  v4 = a4;
  v5 = (-(unsigned __int16)word_300489C - dword_3004890) & 0xFFFF;
  v6 = (-(unsigned __int16)word_3004898 - dword_3004894) & 0xFFFF;
  if ( dword_3004890 > 0 )
    v5 = (unsigned int)(((-(unsigned __int16)word_300489C - dword_3004890) << 16) + 0x100000) >> 16;
  if ( dword_3004890 < 0 )
    v5 = ((v5 << 16) - 0x100000) >> 16;
  if ( dword_3004894 > 0 )
    v6 = (unsigned int)(((-(unsigned __int16)word_3004898 - dword_3004894) << 16) + 0x100000) >> 16;
  if ( dword_3004894 < 0 )
    v6 = ((v6 << 16) - 0x100000) >> 16;
  *a3 = v5 + 16 * (a1 - v2025734);
  *v4 = v6 + 16 * (a2 - v2025736);
  return v8;
}
