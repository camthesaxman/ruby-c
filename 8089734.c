int __fastcall task00_for_dp12(unsigned __int8 a1)
{
  int v1; // r12@1
  __int16 v2; // r6@1
  int *v3; // r3@3
  unsigned int v4; // r0@4
  __int16 *v5; // r0@6
  int *v6; // r1@15
  signed int v7; // r3@16
  __int16 *v8; // r4@17
  signed int v9; // r3@20
  __int16 *v10; // r4@21
  int *v11; // r2@23
  __int16 v12; // r0@23
  int v14; // [sp+1Ch] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  if ( v202FFA4 )
  {
    DestroyTask(a1);
    byte_3004DD8 = -1;
  }
  else
  {
    v3 = &dword_3004B20[10 * a1];
    if ( *((_WORD *)v3 + 11) )
    {
      v4 = *((_WORD *)v3 + 10);
      if ( v4 <= 0xE )
      {
        switch ( v4 )
        {
          case 0u:
            v5 = &word_30042A4;
            goto _0808980E;
          case 2u:
            v5 = &word_30042A0;
            goto _0808980E;
          case 4u:
            v5 = &word_30042C0;
            goto _0808980E;
          case 6u:
            v5 = &word_30041B4;
            goto _0808980E;
          case 8u:
            v5 = &word_3004288;
            goto _0808980E;
          case 0xAu:
            v5 = &word_3004280;
            goto _0808980E;
          case 0xCu:
            v5 = &word_30041B0;
            goto _0808980E;
          case 0xEu:
            v5 = &word_30041B8;
_0808980E:
            v2 = *v5;
            break;
          default:
            break;
        }
      }
    }
    v6 = &dword_3004B20[10 * v1];
    if ( *((_WORD *)v6 + 8) )
    {
      --*((_WORD *)v6 + 8);
      v7 = *((_WORD *)v6 + 4);
      if ( v7 < *((_WORD *)v6 + 5) )
      {
        v8 = &word_3004DE0[*((_WORD *)v6 + 7) + 320];
        do
        {
          *(&word_3004DE0[960 * (unsigned __int8)byte_3004DD4] + v7) = *v8 + v2;
          ++v8;
          ++v7;
        }
        while ( v7 < SHIWORD(dword_3004B20[10 * v1 + 2]) );
      }
    }
    else
    {
      *((_WORD *)v6 + 8) = *((_WORD *)v6 + 9);
      v9 = *((_WORD *)v6 + 4);
      if ( v9 < *((_WORD *)v6 + 5) )
      {
        v10 = &word_3004DE0[*((_WORD *)v6 + 7) + 320];
        do
        {
          *(&word_3004DE0[960 * (unsigned __int8)byte_3004DD4] + v9) = *v10 + v2;
          ++v10;
          ++v9;
        }
        while ( v9 < SHIWORD(dword_3004B20[10 * v1 + 2]) );
      }
      v11 = &dword_3004B20[10 * v1];
      v12 = *((_WORD *)v11 + 7) + 1;
      *((_WORD *)v11 + 7) = v12;
      if ( v12 == *((_WORD *)v11 + 6) )
        *((_WORD *)v11 + 7) = 0;
    }
  }
  return v14;
}
