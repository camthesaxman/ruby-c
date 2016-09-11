int __fastcall mapheader_trigger_activate_at(int a1, unsigned __int16 a2, unsigned __int16 a3, unsigned __int8 a4)
{
  int v4; // r10@1
  int v5; // r9@1
  int v6; // r8@1
  int v7; // r0@1
  int v8; // r7@1
  int v9; // r6@1
  int v10; // r5@2
  int v11; // r4@2
  int result; // r0@7

  v4 = a2;
  v5 = a3;
  v6 = a4;
  v7 = *(_DWORD *)(a1 + 4);
  v8 = *(_BYTE *)(v7 + 2);
  v9 = 0;
  if ( v8 <= 0 )
  {
_08068E12:
    result = 0;
  }
  else
  {
    v10 = *(_DWORD *)(v7 + 12);
    v11 = *(_DWORD *)(v7 + 12);
    while ( 1 )
    {
      if ( *(_WORD *)v11 == v4 && *(_WORD *)(v11 + 2) == v5 && (*(_BYTE *)(v11 + 4) == v6 || !*(_BYTE *)(v11 + 4)) )
      {
        result = trigger_activate(v10);
        if ( result )
          break;
      }
      v11 += 16;
      v10 += 16;
      if ( ++v9 >= v8 )
        goto _08068E12;
    }
  }
  return result;
}
