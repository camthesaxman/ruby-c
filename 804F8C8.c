int __fastcall sub_804F8C8(unsigned __int8 a1)
{
  int v1; // r5@1
  __int16 v2; // r0@5
  signed int v3; // r2@5
  __int16 *v4; // r1@7
  signed __int16 v5; // r0@7
  signed __int16 v6; // r0@9
  int *v7; // r1@2
  signed __int16 v8; // r0@2
  int v10; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  if ( (unsigned __int8)task_tutorial_oak_boy_girl(*(_WORD *)(dword_3004854 + 84), 1) != 2 )
  {
    v7 = &dword_3004B20[10 * v1];
    v8 = 0;
_0804F9E8:
    *((_WORD *)v7 + 4) = v8;
    return v10;
  }
  if ( !LOWORD(dword_3004B20[10 * v1 + 2]) )
  {
    if ( !*(_BYTE *)(dword_3004854 + 331) )
    {
      v2 = (unsigned __int16)Random() / 0x28Fu;
      v3 = *(_WORD *)(dword_3004854 + 86);
      if ( v3 <= 499 )
      {
        if ( (unsigned __int8)v2 <= 0x4Bu )
        {
          v4 = gRecvCmds;
          v5 = 21554;
        }
        else
        {
          v4 = gRecvCmds;
          v5 = 17699;
        }
        v4[9] = v5;
        v6 = 21554;
        goto _0804F9C2;
      }
      if ( v3 > 1499 )
      {
        if ( (unsigned __int8)v2 <= 0x5Au )
        {
          if ( (((unsigned __int8)v2 - 71) & 0xFFu) <= 0x13 )
          {
            v4 = gRecvCmds;
            v6 = 21554;
            goto _0804F9C2;
          }
          if ( (unsigned __int8)v2 <= 0x1Du )
            goto _0804F9B4;
          goto _0804F9C4;
        }
      }
      else if ( (unsigned __int8)v2 <= 0x50u )
      {
        if ( (((unsigned __int8)v2 - 21) & 0xFFu) <= 0x3B )
        {
          v4 = gRecvCmds;
          v6 = 21554;
_0804F9C2:
          v4[9] = v6;
          goto _0804F9C4;
        }
        if ( (unsigned __int8)v2 <= 9u )
_0804F9B4:
          sub_804F890(1u, 5u);
_0804F9C4:
        v7 = &dword_3004B20[10 * v1];
        v8 = 1;
        goto _0804F9E8;
      }
    }
    v4 = gRecvCmds;
    v6 = 17699;
    goto _0804F9C2;
  }
  return v10;
}
