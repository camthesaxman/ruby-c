int __fastcall sub_808B9F4(unsigned __int8 a1)
{
  int v1; // r4@1
  int *v2; // r1@2
  int v3; // r2@8
  int *v4; // r3@8
  int *v5; // r7@8
  signed __int16 v6; // r0@9
  unsigned int v7; // r1@17
  int *v8; // r4@19
  int v9; // r0@19
  int *v10; // r4@20
  int v11; // r0@20
  int *v12; // r4@21
  int v13; // r0@21
  int *v14; // r4@22
  int v15; // r0@22
  int *v16; // r4@23
  int v17; // r0@23
  int *v18; // r4@24
  int v19; // r0@24
  int v21; // [sp+10h] [bp-4h]@0

  v1 = a1;
  if ( !(word_300179E & 1) )
  {
    if ( word_300179E & 2 )
    {
      v2 = &dword_3004B20[10 * a1];
_0808BA36:
      *v2 = (int)sub_808BB80;
      return v21;
    }
    if ( word_300179E & 0x40 )
    {
      v3 = 4 * a1;
      v4 = &dword_3004B20[10 * a1];
      v5 = dword_3004B20;
      if ( (signed int)*((_WORD *)v4 + 4) <= 0 )
        v6 = 6;
      else
        v6 = *((_WORD *)v4 + 4) - 1;
    }
    else
    {
      if ( !(word_300179E & 0x80) )
      {
        v7 = LOWORD(dword_3004B20[10 * a1 + 2]);
        if ( v7 <= 5 )
        {
          switch ( v7 )
          {
            case 0u:
              v8 = &dword_3004B20[10 * a1];
              v9 = (unsigned __int8)sub_808BCB4(*((_BYTE *)v8 + 10));
              *((_WORD *)v8 + 5) = v9;
              sub_808BCF8(v9);
              break;
            case 1u:
              v10 = &dword_3004B20[10 * a1];
              v11 = (unsigned __int8)sub_808BD4C(*((_BYTE *)v10 + 12));
              *((_WORD *)v10 + 6) = v11;
              sub_808BD6C(v11);
              break;
            case 2u:
              v12 = &dword_3004B20[10 * a1];
              v13 = (unsigned __int8)sub_808BDAC(*((_BYTE *)v12 + 14));
              *((_WORD *)v12 + 7) = v13;
              sub_808BDCC(v13);
              break;
            case 3u:
              v14 = &dword_3004B20[10 * a1];
              v15 = (unsigned __int8)sub_808BE0C(*((_BYTE *)v14 + 16));
              *((_WORD *)v14 + 8) = v15;
              sub_808BE34(v15);
              break;
            case 4u:
              v16 = &dword_3004B20[10 * a1];
              v17 = (unsigned __int8)sub_808BF94(*((_BYTE *)v16 + 18));
              *((_WORD *)v16 + 9) = v17;
              sub_808BFD8(v17);
              break;
            case 5u:
              v18 = &dword_3004B20[10 * a1];
              v19 = (unsigned __int8)sub_808BE74(*((_BYTE *)v18 + 20));
              *((_WORD *)v18 + 10) = v19;
              sub_808BECC(v19);
              break;
            default:
              return v21;
          }
        }
        return v21;
      }
      v3 = 4 * a1;
      v4 = &dword_3004B20[10 * a1];
      v5 = dword_3004B20;
      if ( (signed int)*((_WORD *)v4 + 4) > 5 )
      {
        *((_WORD *)v4 + 4) = 0;
        goto _0808BA9E;
      }
      v6 = *((_WORD *)v4 + 4) + 1;
    }
    *((_WORD *)v4 + 4) = v6;
_0808BA9E:
    sub_808BC3C(LOBYTE(v5[2 * (v3 + v1) + 2]));
    return v21;
  }
  v2 = &dword_3004B20[10 * a1];
  if ( *((_WORD *)v2 + 4) == 6 )
    goto _0808BA36;
  return v21;
}
