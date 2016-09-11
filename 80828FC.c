signed int __fastcall sub_80828FC(int a1, unsigned __int16 a2, unsigned __int16 a3)
{
  int v3; // r7@1
  int v4; // r10@1
  signed int v5; // r4@1
  int v6; // r5@1
  int v7; // r2@2
  int v8; // r8@2
  signed int i; // r4@7
  _WORD *v10; // r1@10
  int v12; // [sp+0h] [bp-24h]@1

  v3 = a1;
  v12 = a2;
  v4 = a3;
  v5 = 0;
  v6 = 0;
  do
  {
    v7 = 16 * v6 + v3;
    v8 = v6 + 1;
    if ( *(_WORD *)(v7 + 10) == v12 && *(_WORD *)(v7 + 12) == v4 )
    {
      if ( *(_BYTE *)(v6 + 33710254) )
        goto _0808298E;
      if ( (unsigned __int8)trainer_flag_check(*(_WORD *)v7) == 1
        && ((unsigned __int16)Random() % 0x64u & 0xFFFF) <= 0x1E )
      {
        for ( i = 1; i <= 4; ++i )
        {
          v10 = (_WORD *)(16 * v6 + v3 + 2 * i);
          if ( !*v10 || !(trainer_flag_check(*(_WORD *)(16 * v6 + v3 + 2 * i)) << 24) )
            break;
        }
        *(_BYTE *)(v6 + 33710254) = i;
_0808298E:
        v5 = 1;
        goto _08082990;
      }
    }
_08082990:
    ++v6;
  }
  while ( v8 <= 55 );
  return v5;
}
