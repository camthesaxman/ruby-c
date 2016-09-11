int __fastcall sub_81441B8(unsigned __int8 a1)
{
  int v1; // r5@1
  unsigned int v2; // r0@1
  int *v3; // r0@4
  int *v4; // r1@5
  int *v5; // r3@8
  int *v6; // r4@8
  unsigned int v7; // r4@10
  int *v8; // r1@12
  __int16 v9; // r1@13
  int *v10; // r0@19
  int *v11; // r4@20
  __int16 v12; // r1@25
  int v14; // [sp+18h] [bp-4h]@0

  v1 = a1;
  v2 = LOWORD(dword_3004B20[10 * a1 + 2]);
  if ( v2 > 0xA )
  {
def_81441E0:
    if ( !(v202F38F & 0x80) )
    {
      v3 = &dword_3004B20[10 * v1];
      *((_WORD *)v3 + 4) = 1;
      *((_WORD *)v3 + 7) = 88;
      LOWORD(dword_3004B20[10 * *((_WORD *)v3 + 5) + 9]) = 0;
      v2039320 = 0;
    }
  }
  else
  {
    switch ( v2 )
    {
      default:
        goto def_81441E0;
      case 1u:
        v4 = &dword_3004B20[10 * v1];
        if ( *((_WORD *)v4 + 7) )
          --*((_WORD *)v4 + 7);
        else
          ++*((_WORD *)v4 + 4);
        break;
      case 2u:
        v4000000 &= 0xFEFFu;
        v5 = &dword_3004B20[10 * v1];
        v6 = &dword_3004B20[10 * *((_WORD *)v5 + 5)];
        if ( (int (__fastcall *)(unsigned __int8))*v6 == sub_8143B68 )
        {
          if ( (signed int)*((_WORD *)v5 + 6) > 51 )
          {
            *((_WORD *)v5 + 4) = 10;
          }
          else
          {
            v7 = 0;
            do
            {
              sub_8072BD8(
                *((_BYTE **)*(&gCreditsEntryPointerTable + 5 * LOWORD(dword_3004B20[10 * v1 + 3]) + v7) + 1),
                0,
                ((v7 << 25) + 150994944) >> 24,
                0xF0u);
              v7 = (v7 + 1) & 0xFFFF;
            }
            while ( v7 <= 4 );
            v8 = &dword_3004B20[10 * v1];
            ++*((_WORD *)v8 + 6);
            ++*((_WORD *)v8 + 4);
            LOWORD(dword_3004B20[10 * *((_WORD *)v8 + 5) + 9]) = 1;
            if ( HIWORD(dword_3004B20[10 * *((_WORD *)v8 + 5) + 8]) == 1 )
              v9 = 12941;
            else
              v9 = 6503;
            BeginNormalPaletteFade(768, 0, 0x10u, 0, v9);
          }
        }
        else
        {
          *((_WORD *)v6 + 18) = 0;
        }
        break;
      case 3u:
        v4000000 |= 0x100u;
        if ( !(v202F38F & 0x80) )
        {
          v10 = &dword_3004B20[10 * v1];
          *((_WORD *)v10 + 7) = 130;
          ++*((_WORD *)v10 + 4);
        }
        break;
      case 4u:
        v11 = &dword_3004B20[10 * v1];
        if ( *((_WORD *)v11 + 7) )
        {
          --*((_WORD *)v11 + 7);
        }
        else if ( sub_8144454(LOBYTE(dword_3004B20[10 * v1 + 3]), BYTE2(dword_3004B20[10 * v1 + 2])) << 24 )
        {
          ++*((_WORD *)v11 + 4);
        }
        else
        {
          ++*((_WORD *)v11 + 4);
          if ( HIWORD(dword_3004B20[10 * *((_WORD *)v11 + 5) + 8]) == 1 )
            v12 = 12941;
          else
            v12 = 6503;
          BeginNormalPaletteFade(768, 0, 0, 0x10u, v12);
        }
        break;
      case 5u:
        if ( !(v202F38F & 0x80) )
        {
          MenuZeroFillWindowRect(0, 9u, 0x1Du, 0x13u);
          LOWORD(dword_3004B20[10 * v1 + 2]) = 2;
        }
        break;
      case 0xAu:
        LOWORD(dword_3004B20[10 * HIWORD(dword_3004B20[10 * v1 + 2]) + 4]) = 1;
        DestroyTask(v1);
        break;
    }
  }
  return v14;
}
