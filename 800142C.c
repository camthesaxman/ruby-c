int __fastcall sub_800142C(__int16 a1, __int16 a2, _WORD *a3, __int16 a4, __int16 a5)
{
  __int16 v5; // r6@1
  _WORD *v6; // r3@1
  int *v7; // r4@1
  int i; // r1@2
  __int16 v10; // [sp+4h] [bp-28h]@1
  int v11; // [sp+28h] [bp-4h]@0

  v10 = a2;
  v5 = a4;
  v6 = a3;
  v7 = &dword_30017AC[2 * (unsigned __int8)byte_30017A8];
  if ( !(byte_30017A8 & 0x80) )
  {
    for ( i = *a3; (i + 1) << 16; i = *v6 )
    {
      *(_WORD *)v7 = sOamBitmasks & i | (i + v10) & 0xFF | ((v5 & 0x1F) << 8);
      *((_WORD *)v7 + 1) = v6[1] & 0xFE00 | (v6[1] + a1) & 0x1FF | 16 * (v5 & 0x3E0);
      *((_WORD *)v7 + 2) = v6[2] & 0xFC00 | (v6[2] + a5) & 0x3FF | v5 & 0xFC00;
      v7 += 2;
      ++byte_30017A8;
      v6 += 3;
      if ( byte_30017A8 & 0x80 )
        break;
    }
  }
  return v11;
}
