int __fastcall sub_80C2878(unsigned __int8 a1)
{
  int v1; // r5@1
  unsigned int v2; // r0@1
  int *v3; // r1@5
  __int16 v4; // r0@5
  signed int v5; // r4@7
  int v6; // r6@7
  int *v7; // r1@8
  int *v8; // r4@11
  __int16 v9; // r0@11
  signed int v10; // r4@12
  int *v11; // r2@16
  __int16 v12; // r0@16
  signed int v13; // r4@17
  signed int v14; // r4@21
  __int16 v15; // r0@23
  int *v16; // r0@26
  int v18; // [sp+0h] [bp-78h]@23
  int v19; // [sp+74h] [bp-4h]@27

  v1 = a1;
  v2 = LOWORD(dword_3004B20[10 * a1 + 2]);
  if ( v2 <= 5 )
  {
    switch ( v2 )
    {
      case 0u:
        if ( !v2018004 )
          ++LOWORD(dword_3004B20[10 * v1 + 2]);
        break;
      case 1u:
        v3 = &dword_3004B20[10 * v1];
        v4 = *((_WORD *)v3 + 5) + 1;
        *((_WORD *)v3 + 5) = v4;
        if ( v4 == 31 )
        {
          *((_WORD *)v3 + 5) = 0;
          goto _080C2A4A;
        }
        break;
      case 2u:
        v5 = 0;
        v6 = 4 * v1;
        do
        {
          v7 = &dword_3004B20[10 * (unsigned __int8)CreateTask((int)sub_80C3A5C, 10)];
          *((_WORD *)v7 + 4) = *(_BYTE *)(v5 + 33785488);
          *((_WORD *)v7 + 5) = v5++;
        }
        while ( v5 <= 3 );
        goto _080C2A42;
      case 3u:
        if ( v2018005 == 4 )
        {
          v8 = &dword_3004B20[10 * v1];
          v9 = *((_WORD *)v8 + 5) + 1;
          *((_WORD *)v8 + 5) = v9;
          if ( v9 == 31 )
          {
            *((_WORD *)v8 + 5) = 0;
            CreateTask((int)sub_80C3B30, 10);
            ++*((_WORD *)v8 + 4);
            v10 = 0;
            if ( v2038690 )
            {
              do
                ++v10;
              while ( v10 <= 3 && *(_BYTE *)(v10 + 33785488) );
            }
            sub_80C3E60((unsigned __int8)v10, 14);
          }
        }
        break;
      case 4u:
        v11 = &dword_3004B20[10 * v1];
        v12 = *((_WORD *)v11 + 5) + 1;
        *((_WORD *)v11 + 5) = v12;
        v6 = 4 * v1;
        if ( v12 == 21 )
        {
          *((_WORD *)v11 + 5) = 0;
          v13 = 0;
          if ( v2038690 )
          {
            do
              ++v13;
            while ( v13 <= 3 && *(_BYTE *)(v13 + 33785488) );
          }
          if ( v203869A & 1 )
          {
            StringCopy(&gStringVar1, &byte_3002978[28 * v13]);
            v14 = v13 << 6;
          }
          else
          {
            v14 = v13 << 6;
            StringCopy(&gStringVar1, (_BYTE *)(v14 + 33785213));
          }
          StringCopy(&gStringVar2, (_BYTE *)(v14 + 33785202));
          StringExpandPlaceholders(&v18, (unsigned __int8 *)&gUnknown_0842CEA2);
          sub_80C3158(&v18, v2018000);
          v15 = sub_80C34AC(&v18);
          sub_80C34CC(v15, 144, 0xFFFF, 1088);
_080C2A42:
          v3 = &dword_3004B20[2 * (v6 + v1)];
_080C2A4A:
          ++*((_WORD *)v3 + 4);
        }
        break;
      case 5u:
        v16 = &dword_3004B20[10 * v1];
        *((_WORD *)v16 + 4) = 0;
        *v16 = (int)sub_80C2A8C;
        break;
      default:
        return v19;
    }
  }
  return v19;
}
