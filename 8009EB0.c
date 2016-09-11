int __fastcall MainMenuPressedA(unsigned __int8 a1)
{
  int v1; // r4@1
  int *v2; // r1@2
  signed int v3; // r3@2
  int v4; // r1@5
  signed int v5; // r1@8
  signed int v6; // r1@12
  signed int v7; // r0@16
  int (*v8)(); // r0@25
  int v10; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( !(v202F38F & 0x80) )
  {
    v2 = &dword_3004B20[10 * a1];
    v3 = *((_WORD *)v2 + 4);
    if ( v3 == 1 )
    {
      v5 = *((_WORD *)v2 + 5);
      if ( v5 == 1 )
        goto LABEL_17;
      if ( v5 > 1 && v5 == 2 )
        goto LABEL_19;
    }
    else
    {
      if ( v3 <= 1 || v3 != 2 )
      {
        v4 = *((_WORD *)v2 + 5);
        if ( v4 && v4 == 1 )
          goto LABEL_19;
LABEL_17:
        v7 = 0;
        goto LABEL_20;
      }
      v6 = *((_WORD *)v2 + 5);
      if ( v6 == 1 )
        goto LABEL_17;
      if ( v6 > 1 )
      {
        if ( v6 == 2 )
        {
          v7 = 3;
          goto LABEL_20;
        }
        if ( v6 == 3 )
        {
LABEL_19:
          v7 = 2;
LABEL_20:
          if ( v7 == 1 )
          {
            v202EAC8 = 0;
            v202EEC8 = 0;
            v8 = CB2_ContinueSavedGame;
          }
          else
          {
            if ( v7 <= 1 )
            {
LABEL_24:
              v202EAC8 = 0;
              v202EEC8 = 0;
              dword_3004B20[10 * v1] = (int)Task_Birch1;
              return v10;
            }
            if ( v7 != 2 )
            {
              if ( v7 == 3 )
              {
                SetMainCallback2((int)CB2_InitMysteryEventMenu);
                DestroyTask(v1);
                return v10;
              }
              goto LABEL_24;
            }
            dword_3001778 = (int)sub_80096FC;
            v8 = CB2_InitOptionMenu;
          }
          SetMainCallback2((int)v8);
          DestroyTask(v1);
          return v10;
        }
      }
    }
    v7 = 1;
    goto LABEL_20;
  }
  return v10;
}
