int __fastcall task_tutorial_controls_fadein(_BYTE *a1)
{
  _BYTE *v1; // r4@1
  unsigned int v2; // r5@1
  int v3; // r3@3
  int v4; // r2@3
  unsigned __int8 v5; // r0@3
  int v7; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  if ( *a1 )
  {
    do
    {
      if ( ((signed int)*((_WORD *)v1 + 1) >> v2) & 1 )
      {
        v3 = 12 * v2;
        v4 = (int)&v1[12 * v2];
        v5 = *(_BYTE *)(v4 + 5) - 1;
        *(_BYTE *)(v4 + 5) = v5;
        if ( v5 == 255 )
        {
          if ( *(_WORD *)(v4 + 8) & 0x8000 )
            sub_81249E4((int)&v1[v3 + 4]);
          else
            sub_8124BEC(&v1[v3 + 4]);
          v1[12 * v2 + 5] = v1[12 * v2 + 13];
        }
      }
      v2 = (v2 + 1) & 0xFF;
    }
    while ( v2 <= 0xF );
  }
  return v7;
}
