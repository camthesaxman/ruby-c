int sub_8050760()
{
  unsigned int v0; // r1@1
  unsigned int v1; // r4@1
  __int16 v2; // r2@1
  __int16 v3; // r2@11
  int v5; // [sp+Ch] [bp-4h]@0

  v0 = *(_WORD *)(dword_3004854 + 300);
  v1 = *(_WORD *)(dword_3004854 + 90);
  v2 = 0;
  if ( v0 > 0x383 )
  {
    if ( ((v0 - 900) & 0xFFFF) > 0x257 )
    {
      if ( ((v0 - 1500) & 0xFFFF) > 0x257 )
      {
        if ( ((v0 - 2100) & 0xFFFF) > 0x383 )
        {
          if ( (v0 - 3300) << 16 <= 0x12B0000 )
            v2 = 1;
        }
        else
        {
          v2 = 2;
        }
      }
      else
      {
        v2 = 3;
      }
    }
    else
    {
      v2 = 4;
    }
  }
  else
  {
    v2 = 5;
  }
  sub_8050508(v2);
  v3 = 0;
  if ( v1 <= 0x40 )
  {
    if ( ((v1 - 50) & 0xFFFF) > 0x31 )
    {
      if ( ((v1 - 100) & 0xFFFF) > 0x31 )
      {
        if ( ((v1 - 150) & 0xFFFF) > 0x31 )
        {
          if ( ((v1 - 200) & 0xFFFF) > 0x31 )
          {
            if ( ((v1 - 250) & 0xFFFF) > 0x31 )
            {
              if ( ((v1 - 350) & 0xFFFF) > 0x31 )
              {
                if ( ((v1 - 400) & 0xFFFF) > 0x31 )
                {
                  if ( ((v1 - 500) & 0xFFFF) > 0x31 )
                  {
                    if ( ((v1 - 550) & 0xFFFF) > 0x31 )
                    {
                      if ( v1 > 0x257 )
                        v3 = -10;
                    }
                    else
                    {
                      v3 = -9;
                    }
                  }
                  else
                  {
                    v3 = -8;
                  }
                }
                else
                {
                  v3 = -7;
                }
              }
              else
              {
                v3 = -6;
              }
            }
            else
            {
              v3 = -5;
            }
          }
          else
          {
            v3 = -4;
          }
        }
        else
        {
          v3 = -3;
        }
      }
      else
      {
        v3 = -2;
      }
    }
    else
    {
      v3 = -1;
    }
  }
  sub_80504F0(v3);
  return v5;
}
