int __fastcall sub_80774FC(unsigned __int8 a1)
{
  int v1; // r5@1
  int *v2; // r2@1
  __int16 v3; // r0@1
  unsigned __int16 v4; // r0@2
  char v5; // r1@2
  __int16 v6; // r4@2
  int v8; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 12);
  *((_WORD *)v2 + 12) = v3 + 1;
  if ( v3 >= (signed int)*((_WORD *)v2 + 6) )
  {
    *((_WORD *)v2 + 12) = 0;
    v4 = *((_WORD *)v2 + 4);
    v5 = *((_BYTE *)v2 + 10);
    v6 = *((_WORD *)v2 + 7) - 1;
    *((_WORD *)v2 + 7) = v6;
    audio_play_and_stuff(v4, v5);
    if ( !(_BYTE)v6 )
    {
      DestroyTask(v1);
      --v202F7B3;
    }
  }
  return v8;
}
