int __fastcall sub_80AB9A0(unsigned __int8 a1)
{
  int v1; // r4@1
  unsigned int v2; // r0@1
  int *v3; // r4@3
  __int16 v4; // r0@3
  int *v5; // r0@6
  int *v6; // r0@11
  int v8; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = LOWORD(dword_3004B20[10 * a1 + 2]);
  if ( v2 > 4 )
  {
def_80AB9C2:
    if ( !(v201920A & 0x40) )
    {
      v6 = &dword_3004B20[10 * v1];
      *((_WORD *)v6 + 4) = 0;
      *((_WORD *)v6 + 5) = 0;
      *v6 = (int)sub_80ABB70;
    }
  }
  else
  {
    switch ( v2 )
    {
      case 0u:
        v3 = &dword_3004B20[10 * v1];
        v4 = *((_WORD *)v3 + 5);
        *((_WORD *)v3 + 5) = v4 + 1;
        if ( v4 > 60 )
        {
          *((_WORD *)v3 + 5) = 0;
          audio_play_and_stuff(0x61u, 0);
          ++*((_WORD *)v3 + 4);
        }
        return v8;
      case 1u:
        word_30041B4 += 7;
        if ( word_30041B4 <= 160 )
          return v8;
        v5 = &dword_3004B20[10 * v1];
        goto _080ABA68;
      case 2u:
        sub_80B2280();
        ++LOWORD(dword_3004B20[10 * v1 + 2]);
        break;
      case 3u:
        v4000008 &= 0xFCu;
        v400000C &= 0xFCu;
        sub_80B1B14();
        v5 = &dword_3004B20[10 * v1];
_080ABA68:
        ++*((_WORD *)v5 + 4);
        break;
      default:
        goto def_80AB9C2;
    }
  }
  return v8;
}
