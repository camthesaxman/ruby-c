int __fastcall sub_8054FF8(int a1, unsigned __int16 a2, int a3, _WORD *a4)
{
  int v4; // r7@1
  int v5; // r6@1
  _WORD *v6; // r9@1
  signed int v7; // r8@1
  char *v8; // r5@1
  int v9; // r4@2
  int v10; // r0@7
  int v11; // r0@12
  int v12; // r0@15
  int v13; // r4@16
  int v14; // r0@21
  int v15; // r0@24
  int v17; // [sp+18h] [bp-4h]@0

  v4 = a1;
  v5 = a3;
  v6 = a4;
  v7 = a2;
  v8 = &byte_3000580[a1];
  if ( (unsigned __int8)byte_3000580[a1] == 128 )
  {
    v9 = sub_8055648(a3);
    if ( v9 )
    {
      *v6 = sub_8055758();
      *v8 = -127;
      if ( *(_BYTE *)(v5 + 1) )
      {
        sub_80543DC((int)sub_80553E4);
        sub_8055808(v9);
      }
      return v17;
    }
    if ( sub_8054FC0(131) == 1 )
    {
      *v8 = -127;
      if ( *(_BYTE *)(v5 + 1) )
      {
        v10 = sub_80543DC((int)sub_80553E4);
        sub_805585C(v10);
      }
      return v17;
    }
    if ( (unsigned int)(v7 - 18) <= 0xA )
    {
      switch ( v7 )
      {
        case 24:
          if ( sub_8055630(v5) )
          {
            byte_3000580[v4] = -127;
            if ( *(_BYTE *)(v5 + 1) )
            {
              v11 = sub_80543DC((int)sub_80553E4);
              sub_80557F4(v11);
            }
          }
          break;
        case 18:
          if ( sub_8055660(v5) == 1 )
          {
            byte_3000580[v4] = -127;
            if ( *(_BYTE *)(v5 + 1) )
            {
              v12 = sub_80543DC((int)sub_80553E4);
              sub_8055824(v12);
            }
          }
          break;
        case 25:
          v13 = sub_805568C(v5);
          if ( v13 )
          {
            byte_3000580[v4] = -127;
            if ( *(_BYTE *)(v5 + 1) )
            {
              sub_80543DC((int)sub_80553E4);
              sub_8055840(v13);
            }
          }
          break;
        case 27:
          if ( sub_8055618(v5) )
          {
            byte_3000580[v4] = -127;
            if ( *(_BYTE *)(v5 + 1) )
            {
              v14 = sub_80543DC((int)sub_8055408);
              sub_80557E8(v14);
            }
          }
          break;
        case 28:
          if ( sub_8055618(v5) )
          {
            byte_3000580[v4] = -127;
            if ( *(_BYTE *)(v5 + 1) )
            {
              v15 = sub_80543DC((int)sub_8055438);
              sub_80557E8(v15);
            }
          }
          break;
        default:
          break;
      }
    }
  }
  if ( v7 == 23 )
  {
    byte_3000580[v4] = -125;
  }
  else if ( v7 > 23 )
  {
    if ( v7 == 26 )
    {
      byte_3000580[v4] = -128;
      if ( *(_BYTE *)(v5 + 1) )
        sub_80543DC((int)sub_8055390);
    }
    else if ( v7 == 29 && (unsigned __int8)byte_3000580[v4] == 130 )
    {
      byte_3000580[v4] = -127;
    }
  }
  else if ( v7 == 22 )
  {
    byte_3000580[v4] = -126;
  }
  return v17;
}
